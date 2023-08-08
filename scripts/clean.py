from pathlib import Path

program_path = Path(__file__).parent.parent / "program"
program_path.unlink()
